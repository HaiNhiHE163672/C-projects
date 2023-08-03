namespace BaiTap
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Nhap so phan tu: ");
            int n = int.Parse(Console.ReadLine());
            int[] a = new int[n];
            int d = 0;
            for(int i = 0; i < a.Length; i++)
            {
                a[i] = int.Parse(Console.ReadLine());
            }
            Console.WriteLine("Cac phan tu le trong mang la: ");
            for(int i = 0; i < a.Length; i++)
            {
                if (a[i] % 2 != 0)
                {
                    Console.WriteLine($"{a[i]},");
                    d++;
                }
            }
            double tl = d * 1.0 / n;
            Console.WriteLine($"Ti le = {tl}");
        }
    }
}