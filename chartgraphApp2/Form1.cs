using LiveCharts;
using LiveCharts.Wpf;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace chartgraphApp2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        Func<ChartPoint, string> labelPoint = chartpoint => string.Format("{0} ({1:P})", chartpoint.Y, chartpoint.Participation);
        private void button1_Click(object sender, EventArgs e)
        {
            SeriesCollection series = new SeriesCollection();//차트나 차트 그룹의 단일 계열 또는 모든 계열의 컬렉션을 가져옴
            foreach (var obj in dataSet1.Revenue) series.Add(new PieSeries()
            { Title = obj.Year.ToString(), Values = new ChartValues<int> 
            { obj.Total }, DataLabels = true, LabelPoint = labelPoint });
            pieChart1.Series = series;//foreach 루프를 사용하여 datagridview에서 데이터를 가져온 다음
                                      //seriescollection에 데이터를 추가하고 char의 속성을 seriescollection으로 설정
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            pieChart1.LegendLocation = LegendLocation.Bottom;
        }
    }
}
