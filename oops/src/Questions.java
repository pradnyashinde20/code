
public class Questions {
 private int quesno;
 private String questext;
 private String option1;
 private String option2;
 private String option3;
 private String option4;
 private int marks;
 private String ans;
 

public Questions() {
	 quesno=0;
	 questext=null;
	  option1=null;
	  option2=null;
	  option3=null;
	  option4=null;
	  marks=0;
	  ans=null;
}
public Questions(int quesno, String questext, String option1, String option2, String option3, String option4,int marks,String ans) {
	super();
	this.quesno = quesno;
	this.questext = questext;
	this.option1 = option1;
	this.option2 = option2;
	this.option3 = option3;
	this.option4 = option4;
	this.marks=marks;
	this.ans=ans;
	
}

public int getQuesno() {
	return quesno;
}
public void setQuesno(int quesno) {
	this.quesno = quesno;
}
public String getQuestext() {
	return questext;
}
public void setQuestext(String questext) {
	this.questext = questext;
}
public String getOption1() {
	return option1;
}
public void setOption1(String option1) {
	this.option1 = option1;
}
public String getOption2() {
	return option2;
}
public void setOption2(String option2) {
	this.option2 = option2;
}
public String getOption3() {
	return option3;
}
public void setOption3(String option3) {
	this.option3 = option3;
}
public String getOption4() {
	return option4;
}
public void setOption4(String option4) {
	this.option4 = option4;
}

public int getMarks() {
	return marks;
}
public void setMarks(int marks) {
	this.marks = marks;
}
public String getAns() {
	return ans;
}
public void setAns(String ans) {
	this.ans = ans;
}
@Override
public String toString() {
	return "Questions [quesno=" + quesno + ", questext=" + questext + ", option1=" + option1 + ", option2=" + option2
			+ ", option3=" + option3 + ", option4=" + option4 + ", marks=" + marks + ", ans=" + ans + "]";
}



 
}

