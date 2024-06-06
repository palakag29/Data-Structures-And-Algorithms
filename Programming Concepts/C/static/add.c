// int count; as global variable can be used by the main.c file by using extern variable

int increment()
{
    static int count; //static variable
    count = count+1;
    return count;
}

int add(int a,int b){
    int sum = a+b;
    return sum;
}