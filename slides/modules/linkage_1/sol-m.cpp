export module sol;
namespace {
	int x = 42; // x has internal linkage
	bool yes() {return true;} // yes has internal linkage
}
namespace sol {
	static int y = 0; // y has internal linkage
	int z = -1; // z has module linkage
	export inline constexpr int forty_two() {return 42;}
	  // forty_two has external linkage
	int nil() {return 0;} // nil has module linkage
	export int value() {return forty_two() + nil();}
	  // value has external linkage
	int foo() // foo has module linkage
	{
		struct S {}; // S has no linkage
		int i = 0; // i has no linkage
		return yes() + i + sizeof(S);
	}
}
