class Website{
  void webpage(){
    System.out.println("hello");
  }
}
class Webpagetemp extends Website{
void about(){
  System.out.println("hello1");
}
}
class Webpage2 extends Website{
  void text(){
    System.out.println("hello2");
  }
     public static void main(String [] args){
    Webpage2 page=new Webpage2();
    page.webpage();
    page.text();
  }
}
