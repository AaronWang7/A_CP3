# Import class(ChessGame)
from classes import ChessGame

def demonstrate_chess_moves():

    # Initialize game and get pieces
    game = ChessGame()
    pieces = {
        'white_knight': game.get_piece_at("B1"),
        'black_pawn': game.get_piece_at("D7"),
        'white_pawn': game.get_piece_at("D2"),
        'black_bishop': game.get_piece_at("C8"),
        'white_rook': game.get_piece_at("A1")
    }
    
    # Display initial positions
    print("--- INITIAL POSITIONS ---")
    for piece in pieces.values():
        print(game.get_piece_info(piece))
    
    # Define and execute moves
    moves = [
        (pieces['white_knight'], "C3"),
        (pieces['black_pawn'], "D5"),
        (pieces['white_pawn'], "D3"),
        (pieces['black_bishop'], "F5"),
        (pieces['white_rook'], "A4")
    ]
    
    # Execute moves
    for piece, new_pos in moves:
        game.move_piece(piece, new_pos)
    
    # Display final positions
    print("\n***After moves***")
    for piece in list(pieces.values())[:-1]:  # All except white_rook
        print(game.get_piece_info(piece))
    print("White Rook 1 cannot move to A4")
    
    # Display piece counts
    print(f"\nWhite pieces left: {game.get_pieces_left('White')}")
    print(f"Black pieces left: {game.get_pieces_left('Black')}")

if __name__ == "__main__":
    demonstrate_chess_moves()
