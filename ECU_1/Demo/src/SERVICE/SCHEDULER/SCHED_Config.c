/*******************************************************************************************/
/* Author       : Karim Salah Fathey                                                       */
/* Authority    : Information Technology Institute                                         */
/* Layer        : Service Abstraction Layer (SAL)                                          */
/* Module       : OS Scheduler                                                             */
/* Version      : v1.1                                                                     */
/* Date         : 11/03/2024                                                               */
/* File Details : Configuration file for Scheduler module                                  */
/* Target       : STM32f401cc may be comptaeble with any m3/m4 target                      */
/*******************************************************************************************/
/**********************************  Includes **********************************************/
#include "./SERVICE/SCHEDULER/SCHED.h"
#include "./SERVICE/SCHEDULER/SCHED_Config.h"

/********************************** Definitions ********************************************/



/**********************************   Types ************************************************/

/**
 * Runnable task list configuration.
 * 
 * This constant array defines the list of tasks to be executed by the scheduler.
 * Each task is represented by a RunnableTask_t structure containing details such as task name,
 * periodicity, initial delay, and callback function.
 * 
 * Task Details:
 * - TaskName: "LED State Machine" - Descriptive name of the task.
 * - PeriodicityMS: 100 - Task execution frequency in milliseconds.
 * - InitialDelayMS: 0 - Initial delay before the task starts execution.
 * - CallBack: TrafficLight_Runnable - Callback function associated with the task.
 * 
 * The example provided initializes a single task to run the TrafficLight_Runnable function,
 * which controls the traffic light state machine.
 */



const RunnableTask_t RUN_LIST[_Runnable_no] = 
{
    [Clock_Date]=
    {
        .TaskName="Clock Data APP",
        .InitialDelayMS=100,
        .PeriodicityMS=100,
        .CallBack=Clock_Date_Runnable 
    }
    ,
    [StopWatch]=
    {
        .TaskName="Stop Watch APP",
        .InitialDelayMS=100,
        .PeriodicityMS=100,
        .CallBack=Stopwatch_Runnable
    }
    ,
    [Control_Switch]=
    {
        .TaskName="ControlSwitches_Runnable",
        .InitialDelayMS=100,
        .PeriodicityMS=50,
        .CallBack=ControlSwitches_Runnable
    }
    ,
    [Receiver]=
    {
        .TaskName="Receiver runnable",
        .InitialDelayMS=50,
        .PeriodicityMS=5,
        .CallBack=Receiver_Manager_Runnable
    }
    ,
    [Sender]=
    {
        .TaskName="Sender runnable",
        .InitialDelayMS=100,
        .PeriodicityMS=50,
        .CallBack=Sender_Manager_Runnable
    }
    ,
    [Manager]=
    {
        .TaskName="Manager",
        .InitialDelayMS=50,
        .PeriodicityMS=50,
        .CallBack=Manager_Runnable
    }
    ,
    [LCD]=
    {
        .TaskName="LCD APP",
        .InitialDelayMS=0,
        .PeriodicityMS=1,
        .CallBack=LCD_Runnable
    }
    ,
    [Switch_Debouncing]=
    {
        .TaskName="Switch Debouncing Runnable",
        .InitialDelayMS=50,
        .PeriodicityMS=5,
        .CallBack=Switch_Debouncing_Runnable
    }
};
