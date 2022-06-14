#include <iostream>
#include <vector>
void grade_pro(void);
void dagling_grade(void);
void counting_vowel(void);
void m_counting_vowel(void);
void r_while(void);
void r_for(void);
void r_for_mul_def(void);
void range_for(void);
int main(){
    std::cout<<"hello chapter 5"<<std::endl;
    counting_vowel();
    return 0;
}
void grade_pro(void){
    const std::vector<std::string> scores={"F","D","C","B","A","A++"};
    std::string letter;
    size_t grade;
    if(grade<60){
        letter=scores[0];
    }
    else{
        letter=scores[(grade-50)/10];
    }
}
void dagling_grade(void){
    const std::vector<std::string> scores={"F","D","C","B","A","A++"};
    std::string letter;
    size_t grade;
    if(grade<60){
        letter=scores[0];
    }
    else{
        letter=scores[(grade-50)/10];
        if(grade!=100){
            if(grade%10>7){
                letter+="+";
            }
            else if(grade%10<3){
                letter+="-";
            }
        }
    }
}
void counting_vowel(void){
    unsigned aCNt=0,eCnt=0,iCnt=0,oCnt=0,uCnt=0;
    std::cout<<"insert a worl to validation, is vowel or vowel ? __ ";
    char ch;
    while (std::cin>>ch && ch!='!')
    {
        switch (ch)
        {
        case 'a':
            ++aCNt;
            break;
        case 'e':
            ++eCnt;
            break;;
        case 'i':
            ++iCnt;
            break;
        case 'o':
            ++oCnt;
            break;
        case 'u': 
            ++uCnt;
            break;
        default:
            break;
        }
    }
    std::cout<<"Number of vowel a:\t "<<aCNt<<std::endl;
    std::cout<<"Number of vowel e:\t "<<eCnt<<std::endl;    
    std::cout<<"Number of vowel i:\t "<<iCnt<<std::endl;    
    std::cout<<"Number of vowel o:\t "<<oCnt<<std::endl;    
    std::cout<<"Number of vowel u:\t "<<uCnt<<std::endl;    
}
void m_counting_vowel(void){
     unsigned vowel=0,non_vowel=0;
    std::cout<<"insert a worl to validation, is vowel or vowel ? __ ";
    char ch;
    switch (ch)
    {
    case 'a': case 'e': case 'u': case 'i': case 'o':
        ++vowel;
        break;
    
    default:
    ++non_vowel;
        break;
    }
    std::cout<<"total vowel character appear in sentence \t: " <<vowel<<std::endl;
}
void r_while(void){
    std::vector<int> v;
    int i;
    std::cout<<"input a number, press a non integerer for stop ! _____ ";
    while (std::cin>>i)
    {
        v.push_back(i);
    }
    std::vector<int>::iterator beg;
    beg = v.begin();
    while (beg!=v.end() && *beg>=0)
    {
        ++beg;
    }
    std::vector<double> n_pi={3.14,1.145,3.1459,3.145928};
    std::vector<double>::iterator start; 
    start=n_pi.begin();
    while (start!=n_pi.end())
    {
        ++start;
    }
    
}
void r_for(void){
    std::string s="michael sipayung";
    for (decltype(s.size())index=0; index!=s.size() && !isspace(s[index]); ++index)
    {
        s[index]=toupper(s[index]);
    }  
}
void r_for_mul_def(void){
    std::vector<double> v;
    size_t sz; 
    for(decltype(v.size())i=0, sz = v.size();i!=sz;++i){                                //multiple defenition in the for header
        v.push_back(v[i]);
    }
    std::vector<double>::iterator start; 
    start= v.begin(); 
    for(; start!=v.end(); ++start){
        std::cout<<"omitting parts ofthe for header"<<std::endl;
    }
}
void range_for(void){
    std::vector<double> v={1,2,3,4,5,6,7,8,9}; 
    for(auto &r :v){                                                                    //using reference to change all the element of vector v
        r*=2;
    }
    for(auto r:v){
        std::cout<<"just print element without modify the current state"<<std::endl;
    }
}
