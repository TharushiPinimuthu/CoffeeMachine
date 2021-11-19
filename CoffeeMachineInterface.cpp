class CoffeeMachineInterface{
    public:
		virtual void chooseFirstSelection(){
			cout<<"Selected first from new machine"<<endl;
		}
		virtual void chooseSecondSelection(){
			cout<<"Selected second from new machine"<<endl;
		}
}