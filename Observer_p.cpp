#include <iostream>
#include <list>
using namespace std;

//Abstract class for Observer
class Iobserver
{
    public:
        virtual ~Iobserver(){};
        virtual void update(string str) = 0;
};

//Abstract class for Subject
class Isubject
{
    public:
        virtual ~Isubject(){};
        virtual void attach(Iobserver *observer) = 0;
        virtual void detach(Iobserver *observer) = 0;
        virtual void notify() = 0;
};

// Subject will have list of observers, attach, detach and notify functions.
class Subject : public Isubject
{
    private:
        string message;
        list <Iobserver*> list_observer;
    public:
        virtual ~Subject()
        {
            cout<<"It was Subject."<<endl;
        }
        void attach(Iobserver *observer) override
        {
            this->list_observer.push_back(observer);
        }
        void detach(Iobserver *observer) override
        {
            this->list_observer.remove(observer);
        }
        // Notifying to list of observers about change and calling update functon on each attached observer.
        void notify() override
        {
            list <Iobserver *> ::iterator it = list_observer.begin();
            while(it != list_observer.end())
            {
                (*it)->update(this->message);
                it++;
            }
        }
        void CreateMessage(string str)
        {
            cout<<"New Message is generated :"<<str<<endl;
            this->message = str;
            this->notify();
        }
};

class Observer : public Iobserver
{
    public:
        string info;
        Subject &subject_;

        // With creation of observer , it will be attached to list.
        Observer(Subject &subject) : subject_(subject)
        {
            cout<<"New Observer is created and attached."<<endl;
            this->subject_.attach(this);
        }
        virtual ~Observer()
        {
            cout<<"I was a observer."<<endl;
        }
        // update will be called in subject::notify
        void update(string str)
        {
            info = str;
        }
        void RemoveMeFromTheList()
        {
            this->subject_.detach(this);
        }
        void showmessage()
        {
            cout<<"Updated message in observers: "<<info<<endl;
        }
};

void ClientCode() {
  Subject *subject = new Subject;
  Observer *observer1 = new Observer(*subject);
  Observer *observer2 = new Observer(*subject);
  Observer *observer3 = new Observer(*subject);
  Observer *observer4;
  Observer *observer5;

  subject->CreateMessage("Hello World! :D");
  observer3->RemoveMeFromTheList();

  subject->CreateMessage("The weather is hot today! :p");
  observer4 = new Observer(*subject);

  observer2->RemoveMeFromTheList();
  observer5 = new Observer(*subject);

  subject->CreateMessage("My new car is great!");
  observer5->RemoveMeFromTheList();

  observer4->RemoveMeFromTheList();
  observer1->RemoveMeFromTheList();

  delete observer5;
  delete observer4;
  delete observer3;
  delete observer2;
  delete observer1;
  delete subject;
}

int main()
{
    ClientCode();
    return 0;
}