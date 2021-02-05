class Widget
{
public:
	Widget();
	void select(int idx);

private:
	void f();
	void g();
	void h();
	void i();

	enum {cnt = 4};
	void (Widget::* pa[cnt])() = { &Widget::f, &Widget::g, &Widget::h, &Widget::i };
};
