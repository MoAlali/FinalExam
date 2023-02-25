class AA{
    int feet,inches;
    public:
    
    AA()
    {
        feet = 5;
        inches = 5;
    }
       AA(int f )
    {
        feet = f;
        
    }
    int getfeet(){
        return feet;
    }
    int operator+ (AA d)
    {
        int f=feet+d.feet;
        
        return    f  ;
    }
    
};