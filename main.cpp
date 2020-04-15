#include "Person.h"
#include "Tweeter.h"
#include <iostream>
using std::cout;
using std::endl;
#include <memory>
using std::shared_ptr;
using std::make_shared;

int Dummy(Person const& p) { return p.GetNumber(); }

int main()
{
    Person Kate ("Kate", "Gregory",456);
    Person & rKate = Kate;
    Person* pKate = &Kate;

    Tweeter KateGregcons ("Twitter","User",567,"@gregcons");
    Person* pKateGregcons = &KateGregcons;
    Person& rpKateGregcons = KateGregcons;
    Tweeter& rtKateGregcons = KateGregcons;

    cout << rKate.GetName() << endl;
    cout << pKate->GetName() << endl;
    cout << KateGregcons.GetName() << endl;
    cout << rpKateGregcons.GetName() << endl;
    cout << rtKateGregcons.GetName() << endl;
    cout << pKateGregcons->GetName() << endl;

    shared_ptr<Person> spKate = make_shared<Tweeter>("Third", "Name", 678, "@handle");
    cout << spKate->GetName() << endl;

    Kate = KateGregcons;
    cout << Kate.GetName() << endl;

    int x;
    x = Dummy(Kate);
    x = Dummy(KateGregcons);

}
