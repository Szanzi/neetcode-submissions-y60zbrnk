SELECT name FROM customers
    WHERE NOT EXISTS (
        SELECT * FROM orders 
            WHERE customers.id = orders.customer_id
    );