#include "pch.h"
#include "MainWindow.xaml.h"

using namespace winrt;
using namespace Microsoft::UI::Xaml;

namespace winrt::BiliDownloader::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
    }

    void MainWindow::ParseButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        // TODO: 实现Bilibili视频解析逻辑
    }

    void MainWindow::DownloadButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        // TODO: 实现Bilibili视频下载逻辑
    }
}
