#include <iostream>
using std::cout;
using std::flush;
using std::endl;
using std::ostream;

#include <string>
using std::string;

class Color {
	
	string code;
	
	Color(string c) : code(c) {}
	
public:
	
	static Color create(string c) {
		Color color(c);
		return color;
	}
	
	friend ostream& operator << (ostream& os, Color& color);
	
};

ostream& operator << (ostream& os, Color& color) {
	os<<"\033["<<color.code<<"m";
	return os;
}

namespace color {
	static Color red = Color::create("31");
	static Color green = Color::create("32");
	static Color yellow = Color::create("33");
	static Color blue = Color::create("34");
	static Color magenta = Color::create("35");
	static Color cyan = Color::create("36");
	static Color white = Color::create("37");
	static Color normal = Color::create("39");
}
