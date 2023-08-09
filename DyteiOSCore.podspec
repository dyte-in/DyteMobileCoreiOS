Pod::Spec.new do |s|
s.name         = "DyteiOSCore"
s.version      = "0.7.8"
s.summary      = "Beta release for DyteiOSCore SDK which provides Audio/Video calling without UI"
s.description  = "Logically separate the responsibility of video calling logic and UI. This means decoupling, speed, performance, and control over your RTC!"
s.homepage     = "https://dyte.io/"
s.license      = { :type => 'MIT', :file => 'LICENSE' }
s.author           = { 'Dyte' => 'dev@dyte.io' }
s.source = { :git => "https://github.com/dyte-in/DyteMobileCoreiOS.git", :tag => s.version.to_s }
s.vendored_frameworks = "DyteiOSCore.xcframework"
s.platform = :ios
s.swift_version = "5.0"
s.ios.deployment_target  = '13.0'
s.dependency 'DyteiOSSocketIO', '~> 0.1.6'
s.dependency 'JitsiWebRTC', '~> 106.0.0'
end
