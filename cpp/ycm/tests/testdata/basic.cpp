struct Foo {
  int x; //!< A docstring.
  int y;
  char c;
};

int main()
{
  Foo foo;
  // The location after the dot is line 11, col 7
  foo.
}
