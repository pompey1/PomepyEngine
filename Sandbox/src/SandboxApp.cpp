#include <Pompey.h>

class Sandbox : public Pompey::Application {
public:
	Sandbox() {

	};
	~Sandbox() {

	};
};

Pompey::Application* Pompey::CreateApplication() {
	return new Sandbox();
}