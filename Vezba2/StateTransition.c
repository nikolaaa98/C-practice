#include <stdio.h>
#include <stdlib.h>


// Different state of ATM machine
typedef enum {
    Idle_State,
    Card_Inserted_State,
    Pin_Eentered_State,
    Option_Selected_State,
    Amount_Entered_State
}eSystemState;


//Different type events
typedef enum{
    Card_Insert_Event,
    Pin_Enter_Event,
    Option_Selection_Event,
    Amount_Enter_Event,
    Amount_Dispatch_Event
}eSystemEvent;

eSystemState AmountDispatchHandler(void){
    return Idle_State;
}

eSystemState EnterAmountHandler(void){
    return Amount_Entered_State;
}

eSystemState OptionSelectedHandler(void){
    return Option_Selected_State;
}

eSystemState EnterPinHandler(void){
    return Pin_Eentered_State;
}

eSystemState InsertCardHandler(void){
    return Card_Inserted_State;
}

int main(){

    eSystemState eNextState = Idle_State;
    eSystemEvent eNewEvent;

    while(1){
        eSystemEvent eNewEvent = Card_Insert_Event;

        switch (eNextState)
        {
            case Idle_State:
                if(Card_Insert_Event == eNewEvent){
                    eNextState = InsertCardHandler();
                }
            break;

            case Pin_Eentered_State:
                if(Option_Selection_Event == eNewEvent){
                    eNextState = OptionSelectedHandler();
                }
            break;

            case Option_Selected_State:
                if(Amount_Enter_Event == eNewEvent){
                    eNextState = EnterAmountHandler();
                }
            break;

            case Amount_Entered_State:
                if(Amount_Dispatch_Event == eNewEvent){
                    eNextState = AmountDispatchHandler();
                }
            break;
        
        default:
            break;
        }
    }

    printf("End");
    return 0;
}