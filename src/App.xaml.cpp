#include "pch.h"
#include "App.xaml.h"
#include "MainWindow.xaml.h"

using namespace winrt;
using namespace Microsoft::UI::Xaml;

namespace winrt::BiliDownloader::implementation
{
    App::App()
    {
        InitializeComponent();
        Window window = make<MainWindow>();
        window.Activate();
    }
}
