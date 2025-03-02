class Solution {
public:
int calculate (char a){
    if(a=='I'){ return 1;
    }
    else if(a=='V') {return 5;
    }
    else if(a=='X') {return 10;
    }
    else if(a=='L') {
        return 50;
    }
    else if(a=='C') {return 100;
    }
    else if(a=='D') {
        return 500;
    }
    else if(a=='M') {return 1000;
}
return 23345;
}

    int romanToInt(string str) {
     int ans=0,v1,v2;
     for(int i=0;i<str.size();i++){
        if(i<str.size()-1){ //not the last charac.
        v1=calculate(str[i]);
        v2=calculate(str[i+1]);
        if(v1<v2){
            ans=ans-v1;
        }
        else {
            ans=ans+v1;
        }
        }
        else{
            ans=ans+calculate(str[i]);
        }


        }

     return ans;   
    }
};