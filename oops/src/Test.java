import java.util.Arrays;
import java.util.Date;

public class Test {

	private int tid;
	private String tname;
	private Date dot;
	private Questions list[];
	private int size;
	
	public Test() {
		tid=0;
		tname=null;
		dot=null;
		list=null;
		size=0;
		}

	public Test(int tid, String tname, Date dot, Questions[] list, int size) {
		super();
		this.tid = tid;
		this.tname = tname;
		this.dot = dot;
		this.list = list;
		this.size = size;
	}

	public int getTid() {
		return tid;
	}

	public void setTid(int tid) {
		this.tid = tid;
	}

	public String getTname() {
		return tname;
	}

	public void setTname(String tname) {
		this.tname = tname;
	}

	public Date getDot() {
		return dot;
	}

	public void setDot(Date dot) {
		this.dot = dot;
	}

	public Questions[] getList() {
		return list;
	}

	public void setList(Questions[] list) {
		this.list = list;
	}

	public int getSize() {
		return size;
	}

	public void setSize(int size) {
		this.size = size;
	}

	@Override
	public String toString() {
		return "Test [tid=" + tid + ", tname=" + tname + ", dot=" + dot + ", list=" + Arrays.toString(list) + ", size="
				+ size + "]";
	}
	
	

}
