import XCTest
import SwiftTreeSitter
import TreeSitterWLanguage

final class TreeSitterWLanguageTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_wlanguage())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading WLanguage grammar")
    }
}
