from abc import ABC, abstractmethod

class ChessPiece(ABC):
    color: str 
    position: str

    def __init__(self,color,position):
        self.color = color
        self.position = position
        position = "a8,a7,a6,a5,a4,a3,a2,a1,b8,b7,b6,b5,b4,b3,b2,b1,c8,c7,c6,c5,c4,c3,c2,c1,d8,d7,d6,d5,d4,d3,d2,d1,e8,e7,e6,e5,e4,e3,e2,e1,f8,f7,f6,f5,f4,f3,f2,f1,g8,g7,g6,g5,g4,g3,g2,g1,h8,h7,h6,h5,h4,h3,h2,h1"
        
    @abstractmethod

    def getPosition():
        pass
    def move(newPos:str) -> bool:
        pass
    
    def getSymbol() -> str:
        pass

class Pawn(ChessPiece):
    def canMoveTo(newPos:str):
        pass
    
    def getSymbol():
        pass
class Rook(ChessPiece):
    def canMoveTo(newPos:str):
        pass
    def getSymbol():

        pass
class Knight(ChessPiece):
    def canMoveTo(newPos:str):
        pass
    def getSymbol():
        pass
class Bishop(ChessPiece):
    def canMoveTo(newPos:str):
        pass
    def getSymbol():
        pass
class Queen(ChessPiece):
    def canMoveTo(newPos:str):
        pass
    def getSymbol():
        pass
class King(ChessPiece):
    def canMoveTo(newPos:str):
        pass
    def getSymbol():
        pass

class ChessGame:
    whitePices: list
    blackPieces: list

    def __init__(self,whitePieces,blackPieces):
        self.whitePieces = whitePieces
        self.blackPieces = blackPieces

        whitePieces = ["Pawn","Pawn","Pawn","Pawn","Pawn","Pawn","Pawn","Pawn","Rook","Rook","Knight","Knight","Bishop","Bishop","Queen","King"]
        blackPieces = ["Pawn","Pawn","Pawn","Pawn","Pawn","Pawn","Pawn","Pawn","Rook","Rook","Knight","Knight","Bishop","Bishop","Queen","King"]


    def movePiece(self, piece: ChessPiece, newPos: str) -> bool:
        pass
    def removePiece(self, piece: ChessPiece):
        pass
    def getPiecesLeft(self, color: str) -> list:
        pass
    def getPiecesAt(position:str) -> ChessPiece:
        pass





























"""
Follow the provided class diagram exactly 
Implement ChessPiece as an abstract class 
Create all six concrete piece classes (Pawn, Rook, Knight, Bishop, Queen, King) 
Implement canMoveTo(), getSymbol(), setPosition(), and getColor() methods 
Create ChessGame class with whitePieces and blackPieces lists 
Implement movePiece(), removePiece(), getPiecesLeft(), and getPieceAt() in ChessGame 
Create correct number of pieces for each player 
Set up pieces in starting positions 
Demonstrate moving 5 different pieces 
Implement basic move validation for each piece type 
Use removePiece() method for capturing 
Put each class in its own file 
Add comments to explain your code 
Test each piece type for correct movement 
Focus on core functionality over advanced game logic
"""