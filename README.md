### c++ 공부한것들
### Mark down 연습중입니다... 
>This is a first commit
>    > This is git push orgin/main
[![LICENSE](https:www.google.com-KELLO)](LICENSE) ![GENERATOR](test-blue.svg) ![VERSION](1.0.1)

1.순서가있는목록 ㅎㅎ.  
2.두번째 순서  
3.세번쨰 순서  

*순서가 없는 메인 1  
    *순서가 없는 서브1  
    *순서가 없는 서브 2  
*순서가 없는 메인 2  

4개의 공백 또는 하나의 탭으로 들여쓰기를 만나면 변환되기 시작하여   들여쓰지 않은 행을 만날때까지 변환이 계속된다.


들여쓰기 미적용 This is nomal paragraph:
    This is code block
end code block

들여쓰기 적용 This is nomal paragraph  
    This is code block  
end code block  

<br>로 들여쓰기 하기 This is nomal paragraph<br>
br태그 써서 줄띄우기 완료..  

수평선<br>
<hr>  
<hr><br>
[Naver](https://naver.com,"네이버 바로가기")

강조 글씨체  

*single asterisks*  
_single underscores_  
**double asterisks**  
__double underscorres__  
~~canceline~~  

![Alt text](../../../vs_code/pic/1.png)

<img src="../../../vs_code/pic/1.png" width="450px" height="300px"
title="300px" alt="pic"></img>  

``` python
#Hash table
#매우빠른 평균 삽입 삭제 탐색 연산 제공
#Table: list
#Hash function ->mapping
#collision resolution method

#충돌회피 방법을 사용해야한다
#1.opena ddressing 출돌일어날시 주위의 빈칸을 찾아서 그곳에 저장을시킨다
    #limear probling 
    #qudrating probing
    #dobule Hasing
#2.chaining addresing

#limear probling 
#충돌일어날시 바로밑에다가 데이터삽입 거기도 차있을시 밑으로... 아래빈칸에다가 데이터삽입


#Hash function //10
#10개의 hash table circle list

import random
class Hash(object):
    def __init__(self):
        self.Hash_table=[None for _ in range(10)] #10칸의 hash table
       
    def search(self,key): #작성필요 key값을줄시 해당 hash의 value(슬롯번호)를 리턴한다
        find_key=self.find_slot(key)
        print("save key {} to {}slot".format(key,find_key))
        
    def extend_Hash_size(self):
        pass
        
    def set(self,key,value=None): 
        #key 값이 h에 있으면 value를 update
        #key 값이 H에 없으면 (Key,value)을 insert
        if key==None:
            return None
        i=self.find_slot(key)
        value=self.Hash_function(key)
        if i==False and i!=0: #작성필요...
            temp=[None for _ in range(10)]
            print("Hash talbe full Not find key")
            self.Hash_table.extend(temp)
            print(self.Hash_table)
            #Hash_table의 용량을 증가시켜야한다 저장할공간이 없기떄문에->만들어야함
            return False #실패
        else:
            if self.Hash_table[i]!=None:
                self.Hash_table[i]==key #key값 업데이트 기존에있던값대신 새로운값을 넣는다
                return key
            
            elif self.Hash_table[i]==None: #Hash_table[i]에 값이 엀을경우
                self.Hash_table[i]=key
                return key   
                

                

    def remove(self,key):
        current_slot=self.find_slot(key) #i=현재 key값이 저장되어있는 슬롯번호
        if self.Hash_table[current_slot]==None: #삭제할 value가 존재하지않는다
            print("{}slot empty key".format(current_slot))
            return False
        else: 
            find_slot=current_slot # i슬롯번호에 저장되어있는 키값을 지운후 그슬롯번호를 j에 저장한다 if i=5 j=5번쨰 슬롯
       
        self.Hash_table[current_slot]=None #지우고자하는 current_slot 의 현재 key값을 제거한다
        while True:
                       
            while True: #hash떙기기
                find_slot=(find_slot+1)%len(self.Hash_table) #find_slot의 슬롯번호를 한칸씩 전진시킨다 
                if self.Hash_table[find_slot]==None: #만약 find_slot가 empty라면 정렬 종료
                    return True
                else:
                    orgin_slot=self.Hash_function(self.Hash_table[find_slot]) #orgin_slot은 원래 key값이 저장되어햘 슬롯 번호 
                    if (orgin_slot<current_slot<=find_slot) or (current_slot<find_slot<orgin_slot) or (find_slot<orgin_slot<current_slot): #k=원래 key값이 저장되어야할 번호 
                        break
                        
        
            self.Hash_table[current_slot]=self.Hash_table[find_slot]
            self.Hash_table[find_slot]=None
            current_slot=find_slot
            
            


        
    
    def find_slot(self,key):  #완성
        #key값이 있으면 slot번호 리턴 없으면 그 key값이 삽입될 slot 번호를 return한다
        i=self.Hash_function(key) #Hash function
        start=i
        while self.Hash_table[i]!=None: 
            #while문과 if문이 끝나는 경우 
            # 1.Hash_table에 empty가있을경우
            # 2.Hash_table  full상태이지만 find key를 했을경우
            if self.Hash_table[i]!=key:
                i=((i+1)%len(self.Hash_table))
                if i==start:#한바퀴 다돌음
                    return False #Hash_table이 full 이다
            elif self.Hash_table[i]==key:
                print("find key break")
                break
        return i #i=Hash_table의 슬롯 번호
    
    def Hash_function(self,key):
        value=key%10
        return value
    
    def detail(self):
        print(self.Hash_table)
        # for i in range(len(self.Hash_table)):
        #     print(self.Hash_table[i])
        
    def clear(self):
        self.Hash_table.clear()
        self.Hash_table=[None for _ in range(10)]
if __name__=="__main__":
    Hash=Hash()
    # random.seed(100)
    # for _ in range(8):
    #     insert=Hash.set(random.randrange(0,100))
    
    # Hash.set(98)
    # Hash.set(108)
    # Hash.set(18)
    # Hash.detail()
    # Hash.set(28)
    # Hash.set(38)
    # Hash.detail()
    # Hash.remove(28)
    # Hash.detail()

    init=[0,None,2,3,22,5,55,32,None,9]
    
    for i in init:
        Hash.set(i)
        
        
    Hash.detail()
    Hash.remove(3)
    Hash.detail()
    Hash.search(9)
    Hash.search(22)
    
    
```
    
    
    
    
        



```C++
#include <iostream>

using namespace std;
int average_calc(int,int,int);
void discriminant(int average);
void all_print_data(int dd[3][4]);
int main() {
	int data[3][4];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> data[i][j];
		}
	}
	cout << "\n" << " 학번 " << " C++ " << " JAVA " <<" DS "<<" 합계 " << " 평균 " << " 등급 " << "\n";
	cout << "------------------------------------------\n";
	int average = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << " ";
			cout << data[i][j];
			cout << " ";
		}
		cout << " ";

		average=average_calc(data[i][1], data[i][2], data[i][3]);
		cout << average;
		cout << " ";
		cout << " ";
		discriminant(average);
		cout << "\n";

	}
	
}

void all_print_data(int dd[3][4]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; i < 4; j++) {
			cout << dd[i][j];
			cout << " ";

		}
		cout << "\n";

	}
}
int average_calc(int c, int java, int ds) {
	return (c + java + ds) / 3;
}
void  discriminant(int average) {
	if (average >= 95) {
		cout << "A+";
    }
}
```

