Pod::Spec.new do |s|
s.name         = "DyteiOSCore"
s.version      = "0.4.6"
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
s.dependency 'DyteiOSSocketIO'
s.dependency 'JitsiWebRTC'
s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end
