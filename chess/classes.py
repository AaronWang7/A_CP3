"""
Follow the provided class diagram exactly - 
Implement ChessPiece as an abstract class 
Create all six concrete piece classes (Pawn, Rook, Knight, Bishop, Queen, King) -
Implement canMoveTo(), getSymbol() methods -
Create ChessGame class with whitePieces and blackPieces lists -
Implement movePiece(), removePiece(), getPiecesLeft(), and getPieceAt() in ChessGame -
Create correct number of pieces for each player -
Set up pieces in starting positions -
Demonstrate moving 5 different pieces -
Implement basic move validation for each piece type -
Use removePiece() method for capturing -
Put all classes on 1 file separate from your running file -
Add comments to explain your code -
Test each piece type for correct movement -
Focus on core functionality over advanced game logic-
"""

# Chess game implementation with abstract base class
from abc import ABC, abstractmethod

class ChessPiece(ABC):
    #Abstract base class for chess pieces
    def __init__(self, color, position):
        #Initialize chess piece with color and position
        self.color = color
        self.position = position
    
    @abstractmethod
    def can_move_to(self, new_pos):
        #Abstract method to check if piece can move to new position
        pass
    
    @abstractmethod
    def get_symbol(self):
        #Abstract method to get piece's symbol
        pass
    
    def get_position(self):
        #Get current position of piece
        return self.position
    
    def set_position(self, new_pos):
        #Set new position for piece
        self.position = new_pos

class Pawn(ChessPiece):
    #Pawn chess piece 
    def can_move_to(self, new_pos):
        current_rank = int(self.position[1])
        new_rank = int(new_pos[1])
        direction = 1 if self.color == "White" else -1
        return (new_pos[0] == self.position[0] and 
                new_rank == current_rank + direction)
    
    def get_symbol(self):
        return "P" if self.color == "White" else "p"

class Rook(ChessPiece):
    #Rook chess piece
    def can_move_to(self, new_pos):
        return (self.position[0] == new_pos[0] or 
                self.position[1] == new_pos[1])
    
    def get_symbol(self):
        return "R" if self.color == "White" else "r"

class Knight(ChessPiece):
    #Knight chess piece
    def can_move_to(self, new_pos):
        file_diff = abs(ord(new_pos[0]) - ord(self.position[0]))
        rank_diff = abs(int(new_pos[1]) - int(self.position[1]))
        return (file_diff, rank_diff) in [(1, 2), (2, 1)]
    
    def get_symbol(self):
        return "N" if self.color == "White" else "n"
#
class Bishop(ChessPiece):
    #Bishop chess piece - moves diagonally
    def can_move_to(self, new_pos):
        file_diff = abs(ord(new_pos[0]) - ord(self.position[0]))
        rank_diff = abs(int(new_pos[1]) - int(self.position[1]))
        return file_diff == rank_diff
    
    def get_symbol(self):
        return "B" if self.color == "White" else "b"

class Queen(ChessPiece):
    #Queen chess piece 
    def can_move_to(self, new_pos):
        file_diff = abs(ord(new_pos[0]) - ord(self.position[0]))
        rank_diff = abs(int(new_pos[1]) - int(self.position[1]))
        return (self.position[0] == new_pos[0] or 
                self.position[1] == new_pos[1] or 
                file_diff == rank_diff)
    
    def get_symbol(self):
        return "Q" if self.color == "White" else "q"

class King(ChessPiece):
    #King chess piece - moves one square 
    def can_move_to(self, new_pos):
        file_diff = abs(ord(new_pos[0]) - ord(self.position[0]))
        rank_diff = abs(int(new_pos[1]) - int(self.position[1]))
        return max(file_diff, rank_diff) == 1
    
    def get_symbol(self):
        return "K" if self.color == "White" else "k"

class ChessGame:
    #Main chess game class managing pieces and moves
    def __init__(self):
        #Initialize game with empty piece lists 
        self.white_pieces = []
        self.black_pieces = []
        self.setup_pieces()
    
    def setup_pieces(self):
        #Set up initial chess piece positions
        # Setup back row pieces
        back_row = [Rook, Knight, Bishop, Queen, King, Bishop, Knight, Rook]
        files = "ABCDEFGH"
        
        # Create white pieces
        for i, piece_class in enumerate(back_row):
            self.white_pieces.append(piece_class("White", f"{files[i]}1"))
        for file in files:
            self.white_pieces.append(Pawn("White", f"{file}2"))
        
        # Create black pieces
        for i, piece_class in enumerate(back_row):
            self.black_pieces.append(piece_class("Black", f"{files[i]}8"))
        for file in files:
            self.black_pieces.append(Pawn("Black", f"{file}7"))
    
    def move_piece(self, piece, new_pos):
        #Move a piece to a new position if the move is valid
        if piece and piece.can_move_to(new_pos):
            piece.set_position(new_pos)
            return True
        return False
    
    def remove_piece(self, piece):
        #Remove a piece from the game
        pieces = self.white_pieces if piece.color == "White" else self.black_pieces
        if piece in pieces:
            pieces.remove(piece)
    
    def get_pieces_left(self, color):
        #Get count of remaining pieces for a color
        pieces = self.white_pieces if color == "White" else self.black_pieces
        return len(pieces)
    def get_piece_at(self, position):
        #Get piece at a specific position
        for piece in self.white_pieces + self.black_pieces:
            if piece.get_position() == position:
                return piece
        return None
    
    def get_piece_info(self, piece):
        #Get formatted string with piece information
        if not piece:
            return "No piece"
        
        pieces = self.white_pieces if piece.color == "White" else self.black_pieces
        same_type = [p for p in pieces if type(p) == type(piece)]
        piece_num = same_type.index(piece) + 1
        
        return f"{piece.color} {type(piece).__name__} {piece_num}, Symbol {piece.get_symbol()} is at {piece.get_position()}"
