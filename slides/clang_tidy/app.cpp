int func();
char* foobar();

int main() {
	auto x = 1 / 2;
	double y = 1 / x;
	char* cp = new char[1024];
	delete cp;
	func();
	foobar();
	int i;
	return i + 1;
}
