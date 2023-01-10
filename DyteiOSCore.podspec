Pod::Spec.new do |s|
    s.name         = "DyteiOSCore"
    s.version      = "0.0.1"
    s.summary      = "Beta release for DyteiOSCore SDK which provides Audio/Video calling without UI"
    s.description  = "Logically separate the responsibility of video calling logic and UI. This means lesser memory needs, decoupling, speed, performance, and control over your RTC!"
    s.homepage     = "https://dyte.io/"
    s.license = { :type => 'Copyright', :text => <<-LICENSE
                   Copyright 2018
                   Permission is granted to...
                  LICENSE
                }
    s.author             = { "$(git config user.name)" => "$(git config user.email)" }
    s.source = { :git => "https://github.com/dyte-in/DyteMobileCoreiOS.git", :tag => "#{s.version}" }
    s.vendored_frameworks = "DyteiOSCore.xcframework"
    s.platform = :ios
    s.swift_version = "5.0"
    s.ios.deployment_target  = '11.0'
end