Pod::Spec.new do |spec|
  spec.name = 'DyteiOSCore'
  spec.version = '0.0.1'
  spec.homepage = 'https://dyte.io/'
  spec.summary      = "Beta release for DyteiOSCore SDK which provides Audio/Video calling without UI"
  spec.description  = "Logically separate the responsibility of video calling logic and UI. This means lesser memory needs, decoupling, speed, performance, and control over your RTC!"
  spec.source = { :git => "https://github.com/dyte-in/DyteMobileCoreiOS.git", :tag => "#{spec.version}" }
  spec.author = { "Shaunak Jagtap" => "shaunak@dyte.io" }
  spec.license = { :type => "MIT", :file => "LICENSE" }
  spec.static_framework = true
  spec.vendored_frameworks = "DyteiOSCore.xcframework"
  spec.libraries = "c++"
  spec.module_name = "#{spec.name}_umbrella"
  spec.ios.deployment_target = '13.0'
end