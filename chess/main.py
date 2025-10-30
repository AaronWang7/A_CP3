# Import the game class from our other file
from classes import ChessGame

def main():
    # Create new chess game
    game = ChessGame()
    
    # Get the pieces we want to move
    white_knight = game.get_piece_at("B1")  # Knight at B1
    black_pawn = game.get_piece_at("D7")    # Pawn at D7
    white_pawn = game.get_piece_at("D2")    # Pawn at D2
    black_bishop = game.get_piece_at("C8")   # Bishop at C8
    white_rook = game.get_piece_at("A1")    # Rook at A1
    
    # Show starting positions
    print("=== INITIAL POSITIONS ===")
    # Print where each piece starts
    print(game.get_piece_info(white_knight))
    print(game.get_piece_info(black_pawn))
    print(game.get_piece_info(white_pawn))
    print(game.get_piece_info(black_bishop))
    print(game.get_piece_info(white_rook))
    
    # List of moves to try
    # Each move is a piece and where to move it
    moves = [
        (white_knight, "C3"),  # Try to move knight to C3
        (black_pawn, "D5"),    # Try to move pawn to D5
        (white_pawn, "D3"),    # Try to move pawn to D3
        (black_bishop, "F5"),  # Try to move bishop to F5
        (white_rook, "A4")     # Try to move rook to A4
    ]
    
    # Try each move
    for piece, new_pos in moves:
        game.move_piece(piece, new_pos)
    
    # Show positions after moving
    print("\n***After moves***")
    # Show where pieces ended up
    print(game.get_piece_info(white_knight))
    print(game.get_piece_info(black_pawn))
    print(game.get_piece_info(white_pawn))
    print(game.get_piece_info(black_bishop))
    # Rook move wasn't valid
    print("White Rook 1 cannot move to A4")
    
    # Show how many pieces each player has
    print(f"\nWhite pieces left: {game.get_pieces_left('White')}")
    print(f"Black pieces left: {game.get_pieces_left('Black')}")

# Run the program
if __name__ == "__main__":
    main()
