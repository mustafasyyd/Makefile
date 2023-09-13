#include<iostream>

class Singleton{

	private:
		static Singleton* instance;
		Singleton(){}
	public:
		static Singleton* make_uinstance()
		{
			instance = (Singleton*)malloc(sizeof(Singleton));
			return instance;
		}
		
		Singleton* getInstance()
		{	
			return instance;
		}

};
Singleton* Singleton::instance=nullptr;

int main(){

	Singleton* instance = Singleton::make_uinstance();

	return 0;
}
