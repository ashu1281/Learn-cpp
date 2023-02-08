namespace narrowstring {
	class string {
	private:
		char *m_pstr;
	};
}

namespace widestring {
	class string {
	private:
		wchar_t *m_pstrw;
	};
}

using namespace narrowstring;

int main() {
	string s; // as good as narrowstring::string s
	widestring::string t;
}
