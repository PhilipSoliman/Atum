#include <Atum.h>

class Sandbox : public Atum::Application
{
	public:
		Sandbox()
		{
		}
		~Sandbox()
		{
		}
};

Atum::Application* Atum::CreateApplication()
{
	return new Sandbox();
}