// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "DyteMobileCoreiOS",
    platforms: [.iOS(.v13)],
    products: [
        .library(name: "DyteiOSCore", targets: ["DyteiOSCore", "WebRTC", "DyteiOSSocketIO", "Starscream"]),
    ],
    targets: [
        .binaryTarget(
            name: "WebRTC",
            url: "https://github.com/webrtc-sdk/Specs/releases/download/114.5735.02/WebRTC.xcframework.zip",
            checksum: "c30668eac8f14a21cfb5612ca4e81b10e2d8d8d5e5231c00874ca118eff9a1c0"
        ),
        .binaryTarget(
            name: "DyteiOSCore",
            url: "https://github.com/dyte-in/DyteMobileCoreiOS/archive/refs/tags/0.8.5.zip",
            checksum: "24baa21817d1ee4ec7359b67d56b0cdd3c1834a263c3f165281e0e8eb1f2cc8c"
        ),
        .binaryTarget(
            name: "DyteiOSSocketIO",
            url: "https://github.com/dyte-in/DyteiOSSocketIO/archive/refs/tags/0.1.6.zip",
            checksum: "860c432f25010e318d010163d83bd689d7a890dcdcd4cee5391682020e412eef"
        ),
        .binaryTarget(
            name: "Starscream",
            url: "https://github.com/dyte-in/DyteStarscream/archive/refs/tags/0.0.3.zip",
            checksum: "52bdad383b4405d4bbef3dcb4ebec9c92f5c602d9bf3d9d137e04ad59b082326"
        )
    ]
)

