# Import abstract base class module
from abc import ABC, abstractmethod

# Class named ChessPiece as an abstract base class
class ChessPiece(ABC):
    color: str 
    position: str

    # Init method, setting color and position
    def __init__(self,color,position):
        # Set color and position attributes
        self.color = color
        self.position = position
        position = "a8,a7,a6,a5,a4,a3,a2,a1,b8,b7,b6,b5,b4,b3,b2,b1,c8,c7,c6,c5,c4,c3,c2,c1,d8,d7,d6,d5,d4,d3,d2,d1,e8,e7,e6,e5,e4,e3,e2,e1,f8,f7,f6,f5,f4,f3,f2,f1,g8,g7,g6,g5,g4,g3,g2,g1,h8,h7,h6,h5,h4,h3,h2,h1"
        
    # Asbtract method so that the class is abstract  
    @abstractmethod

    # Define mutiple abstract methods
    def getPosition():
        pass
    def move(newPos:str) -> bool:
        pass
    
    def getSymbol() -> str:
        pass
# Classes for each chess piece inheriting from ChessPiece
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

# Class called ChessGame
class ChessGame:
    whitePices: list
    blackPieces: list

    def __init__(self,whitePieces,blackPieces):
        self.whitePieces = whitePieces
        self.blackPieces = blackPieces

        # Set up each player's pieces
        whitePieces = {"a7":"Pawn","b7":"Pawn","c7":"Pawn","d7":"Pawn","e7":"Pawn","f7":"Pawn","g7":"Pawn","h7":"Pawn",
                       "a8":"Rook","h8":"Rook","b8":"Knight","g8":"Knight","c8":"Bishop","f8":"Bishop","d8":"Queen","e8":"King"}
        blackPieces = {"a2":"Pawn","b2":"Pawn","c2":"Pawn","d2":"Pawn","e2":"Pawn","f2":"Pawn","g2":"Pawn","h2":"Pawn",
                       "a1":"Rook","h1":"Rook","b1":"Knight","g1":"Knight","c1":"Bishop","f1":"Bishop","d1":"Queen","e1":"King"}
        





    def movePiece(self, piece: ChessPiece, newPos: str) -> bool:
        pass
    def removePiece(self, piece: ChessPiece):
        pass
    def getPiecesLeft(self, color: str) -> list:
        pass
    def getPiecesAt(position:str) -> ChessPiece:
        pass

# Not finshed yet





















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