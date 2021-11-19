class CoffeeTouchscreenAdapter : public CoffeeMachineInterface{
    private:
		
	
	public:
		OldCoffeeMachine OldVendingMachine;
		
		void chooseFirstSelection() override{
			cout<<"Selected first flavor in new machine"<<endl;
		}
		void chooseSecondSelection() override{
			cout<<"Selected second flavor in machine"<<endl;
		}
}