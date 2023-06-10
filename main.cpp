#include <iostream>

class Person{
	private:
		std::string name;
		std::string surname;
		std::string passport_id;
		int age;
		int salary;
		bool is_credit_history_bad;
		int rating;
			
	public:
		Person(){
			name = "Undefined";
			surname = "Undefined";
			passport_id = "Undefined";
			age = 18;
			salary = 0;
			is_credit_history_bad = false;
			rating = 0;
		}

		Person(const Person &obj){
			this->name = obj.name;
			this->surname = obj.surname;
			this->passport_id = obj.passport_id;
			this->age = obj.age;
			this->salary = obj.salary;
			this->is_credit_history_bad = obj.is_credit_history_bad;
			this->rating = obj.rating;
		}
		void set_name(const std::string name){
			this->name = name;
		}
		std::string get_name(){
			return name;
		}

		void set_surname(const std::string surname){
			this->surname = surname;
		}
		std::string get_surname(){
			return surname;
		}

		void set_passport_id(const std::string passport_id){
			this->passport_id = passport_id;
		}
		std::string get_passport_id(){
			return passport_id;
		}

		void set_age(const int age){
			if (age < 18) {
				throw std::invalid_argument("The person must be adult.");
			}
			if (age > 100) {
				throw std::invalid_argument("The person can't be over 100 years old.");
			}
			this->age = age;
		}
	
		int get_age(){
			return age;
		}

		void set_is_credit_history_bad(const bool is_credit_history_bad){
			this->is_credit_history_bad = is_credit_history_bad;
		}
		bool get_is_credit_history_bad(){
			return is_credit_history_bad;
		}

		void set_salary(const int salary){
			this->salary = salary;
		}
		int get_salary(){
			return salary;
		}

		void set_rating(const int rating){
			if (rating < 0 || rating > 10) {
				throw std::invalid_argument("The rating must be between 0 and 10.");
			}
			this->rating = rating;
		}
		int get_rating(){
			return rating;
		}
};

int main(){
	Person obj1;

	obj1.set_name("Artyom");
	obj1.set_surname("Avetisyan");
	obj1.set_passport_id("AV1457268");
	obj1.set_age(21);
	obj1.set_salary(200000);
	obj1.set_is_credit_history_bad(false);
	obj1.set_rating(7);

	Person obj2(obj1);
	std::cout << obj2.get_name() << " " << obj2.get_surname() << std::endl;
	obj2.set_name("Vahan");
	std::cout << obj2.get_name() << " " << obj2.get_surname() << std::endl;

	return 0;
}