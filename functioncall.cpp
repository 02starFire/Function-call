#include <iostream>
#include <string>

class Print{

	private:
		std::string prefix;

	public:	
		Print(const std::string& p) : prefix(p) {}

		void operator()(const std::string& s) const{
			std::cout<<prefix << s << "\n";

	}

		


};

int main(){
	Print printer("#>");
        printer("hello egem");

return 0;

}
