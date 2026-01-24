namespace InsertionSort
{
    class Program
    {
        static void Main()
        {
            Student[] students =
            {
                new Student(20, 1, 2025),
                new Student(15, 1, 2025),
                new Student(24, 1, 2025)
            };
           
            var c = InsertionSorting.isSorted(students);
            Console.WriteLine(c ? "Sorted" : "NoSorted");
            InsertionSorting.Sort(students);
            var d = InsertionSorting.isSorted(students);

            foreach (var s in students)
            {
                Console.WriteLine($"{s.Day} - {s.Month} - {s.Year}");
            }

            Console.WriteLine(d ? "Sorted" : "NoSorted");



        }
    }
}