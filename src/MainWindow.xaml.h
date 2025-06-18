#pragma once
#include <winrt/Microsoft.UI.Xaml.h>

namespace winrt::BiliDownloader::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();
        void ParseButton_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
        void DownloadButton_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
    };
}
