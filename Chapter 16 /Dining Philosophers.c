using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
 
namespace Dining_Philosophers
{

    class Program 
    {
        private const int DinerC = 5;
        private static List <Diner> Diners = new List <Diner>();
        private static List <Fork> forks = new List<Fork>();
        private static DateTime TimeToStop;


        static void  Main(string [] args)
        {
            Initialize();
            WriteHeaderLine();


            do
            {
                WriteStatusLine();
                Thread.Sleep(1000);

            }while(DateTime.Now < TimeToStop);

            TearDown();
        }

        private static void Initialize()
        {

        }

        private static void TeachDown()
        {

        }

        private static void WriteHeaderLine()
        {

        }


        private static void WriteStatusLine()
        {

        }

        private static string FormatDinerState(Diner diner)
        {

        }

        private static string FormatForkState(Fork fork)
        {

        }

        private static bool ForkIsBeingUsed(Fork fork)
        {

        }

        private static int GetForkHolder(Fork fork)
        {
            
        }
    }



    Class Diner : IDisposable
    {
        private bool IsCurrentlyHoldingLeftFork = false;
        private bool IsCurrentlyHoldingRightFork = false;
        private const int MaximumWaitTime = 100;
        private static Random Randomizer = new Random();
        private bool ShouldStopEating = false;


        public int ID{get ; private set;}
        public Fork RightFork{get; private set;}
        public Fork LeftFork{get; private set;}
        public DinerState State {get; private set;}


        public IEnumberable<Fork> CurrentlyHeldForks
        {


        }


        public Diner(int id, Fork leftFork, Fork rightFork)
        {

        }
    
        private void KeepTryingToEat()
        {

        }

        private void InitializeDinerState
        {

        }


        private async void BeginDinerActivity()
        {
            await Task.Run(() => KeepTryingToEat());
        }

        private void TryToGetLeftFork()
        {

        }

        private void TryToGetRightFork()
        {
            
        }


        private void DropLeftFork()
        {

        }

        private void DropRightFork()
        {

        }


        private void Eat()
        {

        }

        private void Ponder()
        {

        }

        private static void WaitForAMoment()
        {

        }


        public void Dispose()
        {
            ShouldStopEating = true;
        }
        public enum DinerState
        {
            Eating,
            TryingToGetForks,
            Pondering
        }

    }



    class Fork { }
}
 