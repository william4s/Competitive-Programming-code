# JAVA快速读入与输出

BufferedReader + String + split

```java
import java.io.*;
import java.util.*;

public class Main {
	static int f[][]=new int[105][105];
    public static void main(String[] args) throws IOException {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String line[]=br.readLine().split(" ");
        int n,m;
        n=Integer.parseInt(line[0]);
        m=Integer.parseInt(line[1]);
        for(int i=1;i<=n;i++) {
        	line=br.readLine().split(" ");
        	for(int j=1;j<=m;j++)
        		f[i][j]=Integer.parseInt(line[j-1]);
        }
        for(int i=1;i<=n;i++) {
        	for(int j=1;j<=m;j++) {
        		bw.write(String.format("%d ", f[i][j]));
        	}
        	bw.write("\n");
        }
        
        bw.flush();
    }
}
```



BufferedReader+StringToken（不推荐）

```java
import java.io.BufferedReader;
import java.util.*;
import java.io.*;

public class Main {
    static int a[]=new int[100005];

    public static void main(String[] args) throws IOException {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st=new StringTokenizer(br.readLine());
        int n=Integer.parseInt(st.nextToken());
        st=new StringTokenizer(br.readLine());
        for(int i=1;i<=n;i++){
            a[i]=Integer.parseInt(st.nextToken());
        }
        Arrays.sort(a,1,n+1);
        long max=0,money=0;
        for(int i=1;i<=n;i++){
            long tmp=(long)a[i]*(n-i+1);
            if(tmp>max){
                max=tmp;
                money=a[i];
            }
        }
        System.out.println(String.format("%d %d",max,money));

    }
}
```

## 文件读入(TO DO)





# 常用函数

数组填充：`Arrays.fill(b, 0);`

字典序列比较：`str1.compareTo(str2)`,str1<str2时，返回1，否则返回-1，相等0



# 排序sort

排序分`Arrays.sort()`和`Collections.sort(list);`

前者对数组进行排序，后者对`Collection`进行排序

### sort的lamda

对int从大到小排序为例

```java
Arrays.sort(a,1,11,new Comparator<Integer>(){
    public int compare(Integer a, Integer b){
        return b-a;
    }
});
```



## Arrays.sort()

对数组进行排序

```c++
import java.util.*;
import java.io.*;
import java.lang.*;

class Student{
	int num;
	String name,address;
	public Student(int num, String name, String address) {
		super();
		this.num = num;
		this.name = name;
		this.address = address;
	}
	@Override
	public String toString() {
		return "Student [num=" + num + ", name=" + name + ", address=" + address + "]";
	}
}
//数字从小到大排序
class CmpByNum implements Comparator<Student>{
	public int compare(Student a,Student b) {
		return a.num-b.num; 
	}
}
//字典序排序
class CmpByName implements Comparator<Student>{
	public int compare(Student a,Student b) {
		return a.name.compareTo(b.name);
	}
}
//数字从大到小排序
class CmpTheInt implements Comparator<Integer>{
	public int compare(Integer a,Integer b) {
		return b-a;
	}
}
public class Main {
	public static void main(String[] args)
    {
        Student[] arr
            = { new Student(111, "bbbb", "london"),
                new Student(131, "aaaa", "nyc"),
                new Student(121, "cccc", "jaipur") };
  
        System.out.println("Unsorted");
  
        for (int i = 0; i < arr.length; i++)
            System.out.println(arr[i]);
  
        Arrays.sort(arr, new CmpByName());
  
        System.out.println("\nSorted");
  
        for (int i = 0; i < arr.length; i++)
            System.out.println(arr[i]);
		//对数字进行排序
		Integer a[]=new Integer[1005];
		for(int i=1;i<=10;i++)
			a[i]=i;
		Arrays.sort(a,1,11,new CmpTheInt());
		for(int i=1;i<=10;i++)
			System.out.print(String.format("%d ", a[i]));
    }
}
```

## Collections.sort();

```java
// Java program to demonstrate working of Collections.sort()
import java.util.*;

public class Collectionsorting
{
	public static void main(String[] args)
	{
		// Create a list of strings
		ArrayList<String> al = new ArrayList<String>();
		al.add("Geeks For Geeks");
		al.add("Friends");
		al.add("Dear");
		al.add("Is");
		al.add("Superb");

		/* Collections.sort method is sorting the
		elements of ArrayList in ascending order. */
		Collections.sort(al);

		// Let us print the sorted list
		System.out.println("List after the use of" +
						" Collection.sort() :\n" + al);
	}
}
```



# Collection的使用

类似于C++的STL

## Map

HashTable相对于HashMap比较慢，不推荐用

```JAVA
import java.io.*;
import java.util.*;

public class Main {
	public static void main(String args[]) throws IOException{
		//map定义，记住为HashMap
		//底层是红黑树的TreeMap
		Map<String, Integer> mp=new TreeMap<>();
		//底层是Hash的HashMap
		//Map<String, Integer> mp=new HashMap<>();
		//map存一对键值对
		mp.put("abc", 123);
		mp.put("william4s", 1227);
		mp.put("zly", 109109);
		//通过键找值
		System.out.println(mp.get("william4s"));
		//相同键覆盖
		mp.put("william4s", 10000);
		System.out.println(mp.get("william4s"));
		//Map遍历,类似于迭代器，但不同，因为只遍历key的Set
		for(String key:mp.keySet()) {
			Integer value=mp.get(key);
			System.out.println(key+" : "+value);
		}
		//判断键存不存在
		System.out.println(mp.containsKey("bucunzai"));
		System.out.println(mp.containsKey("zly"));
		//判断值存不存在
		System.out.println(mp.containsValue(10000));
		System.out.println(mp.containsValue(10001));
		//清除
		mp.clear();
	}
}
```



## ArrayList(vector)

在CP中，使用ArrayList而不是Vector，因为前者更快

LinkedList则底层是链表，删除的效率高，其他都一般

ArrayList不是线程安全的,Vector是

```java
import java.io.*;
import java.util.*;

public class Main {
	public static void main(String args[]) throws IOException{
		ArrayList<Integer>  vec = new ArrayList<>();
		//在末尾增加
		for(int i=1;i<=5;i++)
			vec.add(i);
		//删除
		vec.remove(0);
		vec.remove(3);
		vec.add(114);
		//遍历，并且取下标对应的值
		for(int i=0;i<vec.size();i++)
			System.out.println(vec.get(i));
		//第一个出现该数字的下标
		System.out.println(vec.indexOf(114));
		//没出现就返回-1
		System.out.println(vec.indexOf(514));
		System.out.println(vec);
		//修改下标为0的值
		vec.set(0, 514);
		//vec[0]=514;  这句话是错的，不太一样
		System.out.println(vec);
		//ArrayList转数组
		Object arrs[]=vec.toArray();
		for(Object it: arrs )
			System.out.print(String.format("%d ", it));
	}
}
```



## Stack

基本操作相同，比较简单

```java
import java.io.*;
import java.util.*;

public class acw1064 {
	public static void main(String args[]) throws IOException{
		Stack<Integer> stk=new Stack<>();
		stk.push(1);
		stk.push(2);
		stk.push(3);
		stk.push(114);
		stk.push(514);
		//从栈顶搜索元素
		System.out.println(stk.search(114));
		//pop，并有返回值
		System.out.println(stk.pop());
		//top()
		System.out.println(stk.peek());
	}
}
```





# 比赛前配置

## 修改快捷键

![image-20230328122350005](/Users/william4s/Library/Application Support/typora-user-images/image-20230328122350005.png)

## 代码补全

开启代码补全并且关闭任意键都选中补全

![image-20230326170510968](/Users/william4s/Library/Application Support/typora-user-images/image-20230326170510968.png)



## 缺省代码

![9b7e8ec773f8e1d86b19107970ad62b0](/Users/william4s/Library/Containers/com.tencent.qq/Data/Library/Application Support/QQ/nt_qq_9522b586b13c4218a1a18e0ce1bacba5/nt_data/Pic/2023-04/Ori/9b7e8ec773f8e1d86b19107970ad62b0.png)





# 常用算法

## dijkstra

```java
import java.util.*;
import java.io.*;

public class E {
    public static long INF = Long.MAX_VALUE/2;
    public static void main(String[] args) throws IOException{
        BufferedReader f = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(f.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        long[][][] dists = new long[n+1][2][2];
        ArrayList<Edge>[] edges = new ArrayList[n+1];
        for(int i = 0; i < n+1; i++) 
            edges[i] = new ArrayList<Edge>();
        for(int i = 0; i < n+1; i++) 
            for(int j = 0; j < 2; j++) 
                Arrays.fill(dists[i][j], INF);
        for(int i = 0; i < m; i++){
            st = new StringTokenizer(f.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            long w = Integer.parseInt(st.nextToken());
            edges[a].add(new Edge(w, b));
            edges[b].add(new Edge(w, a));
        }
        PriorityQueue<State> pq = new PriorityQueue<State>();
        pq.add(new State(1, 0, 0, 0));
        dists[1][0][0] = 0;
        while(!pq.isEmpty()){
            State curr = pq.poll();
            if(curr.weight > dists[curr.node][curr.db][curr.nn]) continue;
            for(Edge e: edges[curr.node]){
                long dist1 = curr.weight+e.weight;
                long dist2 = curr.weight;
                long dist3 = curr.weight+2*e.weight;
                if(dist1 < dists[e.dest][curr.db][curr.nn]){
                    dists[e.dest][curr.db][curr.nn] = dist1;
                    pq.add(new State(e.dest, dist1, curr.db, curr.nn));
                }
                if(curr.nn == 0 && dist2 < dists[e.dest][curr.db][1]){
                    dists[e.dest][curr.db][1] = dist2;
                    pq.add(new State(e.dest, dist2, curr.db, 1));
                }
                if(curr.db == 0 && dist3 < dists[e.dest][1][curr.nn]){
                    dists[e.dest][1][curr.nn] = dist3;
                    pq.add(new State(e.dest, dist3, 1, curr.nn));
                }
                if(curr.db == 0 && curr.nn == 0 && dist1 < dists[e.dest][1][1]){
                    dists[e.dest][1][1] = dist1;
                    pq.add(new State(e.dest, dist1, 1, 1));
                }

            }
        }
        StringBuilder ans = new StringBuilder();
        for(int i = 2; i <= n; i++){
            ans.append(dists[i][1][1]+" ");
        }
        out.println(ans);

        out.close();
    }

        static class State implements Comparable<State>{
        public int node;
        public long weight;
        public int db;
        public int nn;
        public State(int n, long w, int db, int nn){
            node=n;
            weight=w;
            this.db=db;
            this.nn=nn;
        }
        public int compareTo(State s){
            if(weight < s.weight) return -1;
            if(weight > s.weight) return 1;
            return 0;
        }
    }
    static class Edge{
        public long weight;
        public int dest;
        public Edge(long w, int d){
            weight=w;
            dest=d;
        }
    }
}

```

